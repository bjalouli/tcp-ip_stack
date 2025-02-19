# TCP/IP Stack Implementation

## Overview

This project is a hands-on implementation of a TCP/IP stack, following a structured approach through five networking projects. The goal is to bridge the gap between theoretical networking knowledge and practical implementation by building a custom network stack from scratch in C.

## Project Breakdown

The implementation consists of five key projects, each building upon the previous one:

### Project 1: Multi-Node Topology Emulation
- Built an emulated network of routers and switches.
- Simulated network devices and their interconnections.
- Established a foundation for implementing networking protocols.

### Project 2: Data Link Layer (L2 Routing) & ARP
- Implemented the Data Link Layer (Layer 2) for packet transmission.
- Developed the Address Resolution Protocol (ARP) for resolving MAC addresses.
- Parsed and constructed Ethernet frames.

### Project 3: Layer 2 Switching (MAC-Based Learning & Forwarding)
- Implemented a Layer 2 switch that learns MAC addresses dynamically.
- Developed packet forwarding based on MAC addresses.
- Handled unknown unicast and broadcast frames effectively.

### Project 4: VLAN-Based MAC Learning & Forwarding
- Extended Layer 2 switching to support Virtual LANs (VLANs).
- Implemented VLAN tagging and segregation of network traffic.
- Enabled VLAN-aware MAC learning and forwarding.

### Project 5: Network Layer (L3 Routing)
- Implemented IP packet forwarding and routing.
- Developed basic routing table handling and next-hop resolution.
- Enabled communication between different network segments.

## Learning Outcomes

- Gained an understanding of why the Data Link Layer and Network Layer are essential.
- Designed a new application protocol on a TCP/IP stack.
- Acquired industry-level network programming experience.
- Developed skills in packet buffer handling and protocol parsing.
- Mastered the end-to-end architecture and design of networking applications.


## Tools & Technologies

- **Programming Language:** C
- **Networking Concepts:** Ethernet, ARP, VLAN, IP Routing
- **Development Environment:** Linux-based system
- **Packet Analysis:** Wireshark/tcpdump for debugging
