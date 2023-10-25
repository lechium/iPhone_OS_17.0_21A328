//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CORoleService
{
    NSDictionary *_snapshotState;	// 8 = 0x8
    NSDictionary *_roleObservers;	// 16 = 0x10
    NSDictionary *_memberObservers;	// 24 = 0x18
    NSDictionary *_snapshotObservers;	// 32 = 0x20
}

+ (id)serviceWithDelegate:(id)arg1;	// IMP=0x00100000000c8cfc
- (void).cxx_destruct;	// IMP=0x00000000000cd228
@property(retain, nonatomic) NSDictionary *snapshotObservers; // @synthesize snapshotObservers=_snapshotObservers;
@property(retain, nonatomic) NSDictionary *memberObservers; // @synthesize memberObservers=_memberObservers;
@property(retain, nonatomic) NSDictionary *roleObservers; // @synthesize roleObservers=_roleObservers;
@property(retain, nonatomic) NSDictionary *snapshotState; // @synthesize snapshotState=_snapshotState;
- (id)_remoteInterfaceForClient:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cd11a
- (void)_removeSnapshotObserverForClient:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000ccd77
- (void)_addSnapshotObserverForClient:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000ccba6
- (void)_removeMemberObserverForClient:(id)arg1 ofRole:(id)arg2 inCluster:(id)arg3;	// IMP=0x00000000000cc5d7
- (void)_addMemberObserverForClient:(id)arg1 ofRole:(id)arg2 inCluster:(id)arg3;	// IMP=0x00000000000cc360
- (void)_removeRoleObserverForClient:(id)arg1 ofMember:(id)arg2 inCluster:(id)arg3;	// IMP=0x00000000000cbd91
- (void)_addRoleObserverForClient:(id)arg1 ofMember:(id)arg2 inCluster:(id)arg3;	// IMP=0x00000000000cbb1a
- (void)_notifySnapshotObserver:(id)arg1 snapshotOfCluster:(id)arg2 didChangeTo:(id)arg3;	// IMP=0x00000000000cb923
- (void)_notifyMemberObserver:(id)arg1 membersWithRole:(id)arg2 inCluster:(id)arg3 didChangeTo:(id)arg4;	// IMP=0x00000000000cb6da
- (void)_notifyRoleObserver:(id)arg1 roleOfMember:(id)arg2 inCluster:(id)arg3 didChangeTo:(id)arg4;	// IMP=0x00000000000cb491
- (void)_notifySnapshotObserversSnapshotOfCluster:(id)arg1 didChangeTo:(id)arg2;	// IMP=0x00000000000cb2cc
- (void)_notifyMemberObserversMembersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;	// IMP=0x00000000000cb0cc
- (void)_notifyRoleObserversRoleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;	// IMP=0x00000000000caecc
- (id)_snapshotsForCluster:(id)arg1;	// IMP=0x00000000000cae2e
- (id)_membersWithRole:(id)arg1 inSnapshots:(id)arg2;	// IMP=0x00000000000cac03
- (id)_membersWithRole:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000caabb
- (id)_roleOfMember:(id)arg1 inSnapshots:(id)arg2;	// IMP=0x00000000000ca802
- (id)_roleOfMember:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000ca624
- (void)_identifyAndNotifyMemberChangesFromSnapshot:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000ca119
- (void)_identifyAndNotifyRoleChangesFromSnapshot:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000c9e85
- (void)_updateSnapshots:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000c9c2b
- (void)addOn:(id)arg1 stateChanged:(id)arg2;	// IMP=0x00000000000c9953
- (void)unregisterForSnapshotChangesInCluster:(id)arg1;	// IMP=0x00000000000c98e5
- (void)registerForSnapshotChangesInCluster:(id)arg1;	// IMP=0x00000000000c9831
- (void)unregisterForMemberChangesWithRole:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000c97ab
- (void)registerForMemberChangesWithRole:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000c96d3
- (void)unregisterForRoleChangesOfMember:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000c964d
- (void)registerForRoleChangesOfMember:(id)arg1 inCluster:(id)arg2;	// IMP=0x00000000000c9575
- (_Bool)_applicableToCluster:(id)arg1;	// IMP=0x00000000000c952b
- (void)_addOnRemoved:(id)arg1;	// IMP=0x00000000000c93bb
- (void)_addOnAdded:(id)arg1;	// IMP=0x00000000000c9168
- (void)_clientLost:(id)arg1;	// IMP=0x00000000000c90ca
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x00000000000c8eb7
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000c8dad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
