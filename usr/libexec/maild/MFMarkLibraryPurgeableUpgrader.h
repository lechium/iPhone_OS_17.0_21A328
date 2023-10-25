//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_os_activity;

@interface MFMarkLibraryPurgeableUpgrader : NSObject
{
    NSArray *_mailboxUIDs;	// 8 = 0x8
    NSObject<OS_os_activity> *_activity;	// 16 = 0x10
}

+ (_Bool)isComplete;	// IMP=0x00200000000894aa
+ (id)log;	// IMP=0x0010000000089303
- (void).cxx_destruct;	// IMP=0x002000000008b05f
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSArray *mailboxUIDs; // @synthesize mailboxUIDs=_mailboxUIDs;
- (_Bool)markDirectoryPurgeable:(id)arg1 account:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x001000000008a762
- (void)_removePurgeableXAttrForMailbox:(id)arg1;	// IMP=0x001000000008a506
- (void)_setPurgeableXAttrForMailbox:(id)arg1;	// IMP=0x001000000008a2fb
- (_Bool)_mailboxNeedsToBeMarkedPurgeable:(id)arg1;	// IMP=0x001000000008a079
- (_Bool)_canRun;	// IMP=0x001000000008a044
- (id)mailboxesNeededToBeMarkedPurgeable;	// IMP=0x0010000000089f87
- (void)runMarkLibraryPurgeableUpgraderShouldDefer:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089518
- (id)initWithMailboxUIDs:(id)arg1;	// IMP=0x00100000000893e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
