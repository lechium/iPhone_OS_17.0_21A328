//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, RBSProcessMonitor;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface GKApplicationStateMonitor : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    id <LSApplicationWorkspaceObserverProtocol> _delegate;	// 16 = 0x10
    RBSProcessMonitor *_processMonitor;	// 24 = 0x18
    NSMutableSet *_interestedBundleIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000181570
@property(retain, nonatomic) NSMutableSet *interestedBundleIDs; // @synthesize interestedBundleIDs=_interestedBundleIDs;
@property(retain, nonatomic) RBSProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(nonatomic) __weak id <LSApplicationWorkspaceObserverProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x001000000018130c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000018110f
- (void)startObservingApplicationWorkspaceChanges;	// IMP=0x0010000000180f6c
- (void)updateStateObservation;	// IMP=0x0010000000180ca1
- (void)stopObservingStateChangesForBundleID:(id)arg1;	// IMP=0x0010000000180c22
- (_Bool)startObservingStateChangesForBundleID:(id)arg1;	// IMP=0x0010000000180b62
- (void)dealloc;	// IMP=0x00100000001803ee
- (id)init;	// IMP=0x0010000000180334

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

