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

## Credits <!-- omit in toc -->

- blvnk
