//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SDAirDropDiscoveryLogger, SDClassroomBrowser, SDConnectedBrowser, SDDomainBrowser, SDManagedBrowser, SDNodeCoalescer, SDRapportBrowser, SDSharePointBrowser, SDStatusMonitor, SDWorkgroupBrowser, SDXPCHelperConnection;
@protocol OS_dispatch_queue, OS_xpc_object, SDNodeBrowserDelegate;

@interface SDNodeBrowser : NSObject
{
    NSString *_kind;	// 8 = 0x8
    struct __SFNode *_parent;	// 16 = 0x10
    NSArray *_protocols;	// 24 = 0x18
    NSString *_protocol;	// 32 = 0x20
    long long _mode;	// 40 = 0x28
    int _error;	// 48 = 0x30
    _Bool _combineWorkgroups;	// 52 = 0x34
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    SDNodeCoalescer *_nodeCoalescer;	// 64 = 0x40
    SDAirDropDiscoveryLogger *_airDropDiscoveryLogger;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    _Bool _shouldCollectNodeCoalescerMetrics;	// 88 = 0x58
    CUCoalescer *_coalescer;	// 96 = 0x60
    SDStatusMonitor *_monitor;	// 104 = 0x68
    NSMutableSet *_odiskDomains;	// 112 = 0x70
    NSMutableSet *_airDropDomains;	// 120 = 0x78
    NSMutableSet *_bonjourDomains;	// 128 = 0x80
    NSMutableSet *_windowsWorkgroups;	// 136 = 0x88
    SDDomainBrowser *_domainBrowser;	// 144 = 0x90
    SDManagedBrowser *_managedBrowser;	// 152 = 0x98
    SDClassroomBrowser *_classroomBrowser;	// 160 = 0xa0
    SDConnectedBrowser *_connectedBrowser;	// 168 = 0xa8
    SDWorkgroupBrowser *_workgroupBrowser;	// 176 = 0xb0
    SDSharePointBrowser *_sharePointBrowser;	// 184 = 0xb8
    SDRapportBrowser *_rapportBrowser;	// 192 = 0xc0
    NSDictionary *_options;	// 200 = 0xc8
    NSMutableDictionary *_managedURLTable;	// 208 = 0xd0
    NSMutableDictionary *_commentHashTable;	// 216 = 0xd8
    NSMutableDictionary *_originalNodes;	// 224 = 0xe0
    NSMutableDictionary *_contactIdentifierMap;	// 232 = 0xe8
    NSString *_bundleID;	// 240 = 0xf0
    SDXPCHelperConnection *_helperConnection;	// 248 = 0xf8
    id <SDNodeBrowserDelegate> _delegate;	// 256 = 0x100
    NSObject<OS_xpc_object> *_connection;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x002000000019c583
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property __weak id <SDNodeBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (int)removeNode:(struct __SFNode *)arg1;	// IMP=0x001000000019c471
- (int)addNode:(struct __SFNode *)arg1;	// IMP=0x001000000019c44c
@property(readonly, copy) NSArray *sidebarNodes;
@property(readonly, copy) NSArray *nodes;
- (id)nodesInternal:(_Bool)arg1;	// IMP=0x001000000019c1bb
- (void)appendAllNode:(id)arg1;	// IMP=0x001000000019c125
- (void)stop;	// IMP=0x001000000019bfe0
- (void)start;	// IMP=0x001000000019bced
- (void)unloadRapport;	// IMP=0x001000000019bc4b
- (void)unloadSidebarPrefsMonitor;	// IMP=0x001000000019bbc1
- (void)unloadAirDrop;	// IMP=0x001000000019b9c0
- (void)unloadODisk;	// IMP=0x001000000019b7bf
- (void)unloadClassroom;	// IMP=0x001000000019b71d
- (void)unloadManaged;	// IMP=0x001000000019b67b
- (void)unloadConnected;	// IMP=0x001000000019b5d9
- (void)unloadSharePoints;	// IMP=0x001000000019b57e
- (void)unloadWorkgroups;	// IMP=0x001000000019b4dc
- (void)unloadDomains;	// IMP=0x001000000019b43a
- (void)unloadWindows;	// IMP=0x001000000019b230
- (void)unloadBonjour;	// IMP=0x001000000019b026
- (id)airDropNodes;	// IMP=0x001000000019af27
- (id)odiskNodes;	// IMP=0x001000000019aeb1
- (id)sharePointNodes;	// IMP=0x001000000019ae53
- (id)neighborhoodNodes;	// IMP=0x001000000019adb3
- (id)sidebarNodesFromServerNodes:(id)arg1 nonServerCount:(unsigned long long)arg2 addAllNode:(_Bool *)arg3;	// IMP=0x001000000019a9e4
- (void)updateSelectionReasonInNodes:(id)arg1;	// IMP=0x001000000019a9de
- (void)addFakeRangingMeasurementIfAppropriateToNodesInCache:(id)arg1;	// IMP=0x001000000019a9d8
- (void)addRapportChildrenFromCache:(id)arg1;	// IMP=0x001000000019a7f3
- (void)addConnectedChildrenFromCache:(id)arg1;	// IMP=0x001000000019a25c
- (void)addManagedChildrenFromCache:(id)arg1;	// IMP=0x0010000000199f0c
- (void)addClassroomChildrenFromCache:(id)arg1;	// IMP=0x0010000000199d1d
- (void)addWindowsChildrenFromCache:(id)arg1;	// IMP=0x001000000019970e
- (void)addBonjourChildrenFromCache:(id)arg1;	// IMP=0x0010000000199153
- (void)copyOverBonjourInfo:(struct __SFNode *)arg1 source:(struct __SFNode *)arg2;	// IMP=0x0010000000198f7f
- (id)workgroupChildren;	// IMP=0x0010000000198f17
- (id)domainChildren;	// IMP=0x0010000000198efa
- (void)loadRapport;	// IMP=0x0010000000198d6e
- (void)loadSidebarPrefsMonitor;	// IMP=0x0010000000198cdd
- (void)loadAirDrop;	// IMP=0x00100000001987f7
- (void)loadClassroom;	// IMP=0x0010000000198623
- (void)loadODisk;	// IMP=0x00100000001982b0
- (void)loadManaged;	// IMP=0x0010000000198198
- (void)loadConnected;	// IMP=0x0010000000198008
- (void)loadSharePoints;	// IMP=0x0010000000198002
- (_Bool)onlySupportsADisk:(id)arg1;	// IMP=0x0010000000197f71
- (void)loadWorkgroups;	// IMP=0x0010000000197e3b
- (void)loadDomains;	// IMP=0x0010000000197d1f
- (void)loadWindows;	// IMP=0x00100000001979c3
- (void)loadBonjour;	// IMP=0x00100000001975c9
@property(copy) NSDictionary *options;
@property long long mode;
- (void)sidebarPrefsChanged:(id)arg1;	// IMP=0x00100000001974e0
- (void)managedChanged:(id)arg1;	// IMP=0x00100000001974b0
- (void)connectedChanged:(id)arg1;	// IMP=0x0010000000197480
- (void)sharePointBrowser:(id)arg1 nodesDidChangeWithError:(int)arg2;	// IMP=0x00100000001973e1
- (void)workgroupsChanged:(id)arg1;	// IMP=0x00100000001973b1
- (void)domainsChanged:(id)arg1;	// IMP=0x0010000000197381
- (void)serversChanged:(id)arg1;	// IMP=0x00100000001972c4
- (void)classroomChanged:(id)arg1;	// IMP=0x00100000001972b2
- (void)takeActionOnServerChanged:(id)arg1 neighborhood:(id)arg2;	// IMP=0x0010000000197189
- (void)notifyClientAboutWorkgroups;	// IMP=0x0010000000196db8
- (void)setConnectionState:(int)arg1;	// IMP=0x0010000000196da8
- (void)setUserName:(id)arg1;	// IMP=0x0010000000196d97
- (void)setError:(int)arg1;	// IMP=0x0010000000196d8e
- (void)notifyClient;	// IMP=0x0010000000196d78
- (void)dealloc;	// IMP=0x0010000000196d2c
- (id)initWithNode:(struct __SFNode *)arg1 protocol:(id)arg2 flags:(unsigned long long)arg3 kind:(id)arg4;	// IMP=0x0010000000196afe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
