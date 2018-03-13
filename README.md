


# Sigil
www.sigilplatform.com

What is Sigil?
-----------------

Sigil is a new and revolutionary cryptocurrency that embodies the twin ideals of security and efficiency. It incorporates the best features of both Proof of Work and Proof of Stake mining, supports multiple algorithms, and achieves enhanced security through its implementation of advanced checkpointing and retargeting throughout.

The Sigil team is developing the next generation of crowdfunding technology through the blockchain. Our goal is to provide a more efficient, transparent, and secure crowdfunding platform without taking any fees whatsoever, instead using Sigil to fund the venture. We believe we can empower the individual specifically with this platform, as it will be beneficial for all parties involved. Consumers will be allowed to retain a greater portion of any funds they raise and any transaction intended for them will be ensured through the use of the blockchain. 	

Features
-----------------

  - Hybrid PoW/PoS Coin
  - 97,500,000 total coins
  - 1.5 minute PoW block time
  - 3 minute PoS block time
  - Implements Orbitcoin Super Shield
  - Advanced Checkpointing
  - Time Warp/Instamining Protection
  - Very low transaction fees
  - P2P Port: 39654, RPC Port: 39655
  
Download
-----------------

See https://github.com/Sigil-Developer/Sigil/releases to find Windows, Mac, and Linux wallets.

Build instruktions Linux Daemon
-----------------

Install dependencies:

- sudo apt-get install build-essential
- sudo apt-get install libssl-dev
- sudo apt-get install libdb-dev
- sudo apt-get install libd++-dev
- sudo apt-get install libboost-all-dev
- sudo apt-get install libqrencode-dev

cd sigil/src

- sudo make -f makefile.unix 

To build with UPnP support:

- sudo apt-get install libminiupnpc-dev

- sudo make -f makefile.unix USE_UPNP= (USE_UPNP=- No UPnP support - miniupnp not required, USE_UPNP=0 (the default) UPnP support turned off by default at runtime, USE_UPNP=1 UPnP support turned on by default at runtime)
