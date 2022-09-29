<div align="center">
    <img src="./img/ACA_Cloud_Computing_Associate.png" width=100> <!-- Logo -->
    <h1>ACA Cloud Computing Certification</h1> <!-- Title -->
    <p>
      Cheat Sheet for ACA Cloud Computing Certification.
    </p> <!-- Description -->
</div>

---

<details>
<summary>Table of Contents</summary>

- [Materials](#materials)
- [Content](#content)
  - [ECS (Elastic Compute Service)](#ecs-elastic-compute-service)
  - [VPC](#vpc)
  - [SLB (Server Load Balancer)](#slb-server-load-balancer)
</details>

## Materials

- [Optional] [Operate & Manage a Cloud Server](https://edu.alibabacloud.com/course/7)
- [Optional] [Alibaba Cloud Introduction](https://edu.alibabacloud.com/course/387)
- [ACA Cloud Computing Fundamentals](https://edu.alibabacloud.com/course/353)

## Content

### ECS (Elastic Compute Service)

**ECS Concepts**

- **ECS**: Cloud computing service.
- **ECS as IaaS**: Users manage Application, Data, RUntime, Middleware, OS layers. Alicloud manages Virtualisation, Servers, Storage, Networking layers.
- **Apsara**: Apsara handles storage, scheduling, networking, resource management & distributed coordination for all Alicloud products.
- **Zones & Regions**: Multiple (typically 3) zones within 1 region.

**ECS Instance**

- **ECS Instance**: Individual cloud VM.
- **ECS Instance Types**
  1. **T / S**: Burstable / light workloads.
  2. **G / C**: General purpose & compute-intensive workloads.
  3. **D**: Big data applications.
  4. **R**: High memory applications.
  5. **I**: IO intensive workloads.
  6. **H**: High CPU clock speed.
- **Bare Metal Instances**: Refers to literal physical machines, instead of VMs.
- **ECI (Elastic Container Instances)**: Component of ECS that allows containers to be run without allocating ECS Instances.
- **ECS Instance Failover Rate**
  - **Single Instance Uptime**: 99.975% / mth.
  - **Multi-zone Deployment Uptime**: 99.995% / mth.
- **ECS Instance Billing Model**
  1. **PAYG (Pay-As-You-Go)**
  2. **Subscription**: *NOTE: Can't delete instance & restart.*
  3. **Preemptible Instance**: Similar to PAYG but via bid-based pricing. If bid is lower than asking price, instance is shut down.
  4. **Reserved Instances**: Hybrid of PAYG & Subscription by choosing a split of PAYG & upfront payment for specified amount of time.

**ECS Storage**

- **Pangu**: Name of distributed file system for ECS.
- **Cloud Disk**: Storage for ECS. Purchased separately of ECS instance. Must be mounted to instance in the **same zone**.
- **Cloud Disk Types**: *NOTE: Upgrades improve IOPS (IO Per Second) & throughput.*
  1. **Ultra Disk**
  2. **Standard SSD**
  3. **Enhanced SSD**
- **Disk Snapshots**: Copies of data on a disk at certain time.
- **Disk Snapshot Types**
  1. **Manual Snapshot**: Up to **256** snapshots.
  2. **Auto Snapshot**: Snapshots are made based on snapshot policy, which details snapshot creation frequency & snapshot retention. Up to **1000** snapshots.
**Disk Image**: Complete runtime env used to create an ECS instance. 4 types of Disk Images: Public, Marketplace, Custom, Shared (between Alibaba accounts).

**ECS Networking**

- **VPC (Virtual Private Cloud)**: Private network used to host ECS instance(s).
  - **VRouter**: Routes traffic within VPC.
  - **VSwitch**: Represents a subnet.
- **EIP (Elastic IP)**: Public IP address for VPC. Purchased separately of ECS. Can be moved between instances.
- **Security Groups**: Firewall rules that **allow** / **deny** traffic. 
  - *NOTE: Security Groups are region-bound as VPCs are also region-bound.*
- **VPC Communication with Internet**
  1. **Assign Public IP**: *NOTE: This public IP lives & dies with instance.*
  2. **EIP**
  3. **Attach NAT Gateway to VPC Group**
  4. **SLB (Server Load Balancer)**: *NOTE: For inbound traffic only.*
- **ENI (Elastic Network Interface)**: Virtual network interface to connect between ECS instance & public / private network.

**ECS Additional Settings**

- **Instance Metadata**: Contains Instance ID, IP, OS name.
- **User data**: Refers to input info related for automated bootstrapping when instance is created.

### VPC

### SLB (Server Load Balancer)

**SLB**

- **SLB (Server Load Balancer)**: Traffic distribution control service that distributes traffic among ECS instances according to forwarding rules.
- **SLB Advantages**:
  1. **HA**: 99.95% service availability.
  2. **Scalability**
  3. **Low Cost**: Reduce cost by 60% compared to traditional hardware load balancers.
  4. **Security**: Defend against <5 Gbps DDoS attacks.

**SLB Architecture**

- **SLB Layers**:
  1. **Layer 4 (TCP / UDP)**: No header modification for traffic.
  2. **Layer 7 (HTTP / HTTPS)**: Header modification. `X-Forwarded-For` header contains client IP address.

**SLB Components**

- **SLB Instance**: Service that is region-bound. Receives incoming requests & forwards them to backend servers.
- **Listeners**: Listeners listens for client requests & decides where to send them. Also performs health checks on backend servers.
  - **Listener Configurations**:
    1. **Routing Rules**: How traffic is distributed among ECS instances.
      - **Round Robin**: Sequentially distributed.
      - **WRR (Weighted Round Robin)**: Distributed among weighted ECS instances, which can be set.
      - **WLC (Weighted Least Connections)**: Distributed among weighted ECS instances & number of connections.
    2. **Session Stickiness**: Ensures web traffic in session will be forwarded to same ECS instance.
    3. **Health Check**: Checks if ECS instances are functioning.
      - **Layer 7**: Health check via HTTP head request.
      - **Layer 4 (TCP)**: SLB sends SYN, SYN/ACK, ACK, RST.
      - **Layer 4 (UDP)**: SLB sends UDP probe & expects no response. ICMP Unreachable signifies failed health check.
  - **Listener Limitations**: < 50 listeners per SLB.
- **Backend Servers**: ECS instances.
  - **Backend Server Limitations**
    1. **No Cross-Region Deployment**
    2. **No Limitation on OS**
  - **Backend Server Groups**
    1. **Master-Slave Group (Layer 4)**: Request forwarded to slave server when master server is down.
    2. **VServer Group (Layer 7)**: For customised distribution, eg configuring domain name & URL forwarding rules.
- **SLB Cost Methods**
  1. **Public Network SLB**: Only supports PAYG billing mode.
  2. **Private Network SLB**: Free.

**SLB Additional Settings**

- **SLB Multi-Zone Disaster Tolerance**: Utilise the Primary / Backup Zone feature.
- **Cross-Region Disaster Tolerance**: SLB does NOT help. Use DNS failover capability.
- **Auto Scaling Benefits**
  1. **Maintain ECS Instance Availability**: Repair non-functioning instances.
  2. **Automatically Scale ECS Instances**: Scale up / down.
- **SLB Security**: Protection against DDoS attacks < 5 Gbps.
  1. **Cleaning Threshold**: Scrubs attack traffic.
  2. **Black Hole Threshold**: Shuts all incoming traffic from Internet.

## Credits <!-- omit in toc -->

- blvnk
