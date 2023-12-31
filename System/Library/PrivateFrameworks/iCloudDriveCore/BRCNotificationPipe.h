//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCDataOrDocsScopeGatherer, BRCItemGlobalID, BRCListDirectoryContentsOperation, BRCNotificationManager, BRCXPCClient, BRFileObjectID, BRNotificationQueue, NSHashTable, NSMutableSet, NSSet, NSString;
@protocol BRCNotificationPipeDelegate, BRItemNotificationReceiving, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCNotificationPipe : NSObject
{
    id <BRItemNotificationReceiving> _receiver;	// 8 = 0x8
    BRNotificationQueue *_notifs;	// 16 = 0x10
    CDUnknownBlockType _boostReply;	// 24 = 0x18
    BRCXPCClient *_client;	// 32 = 0x20
    BRCItemGlobalID *_oldWatchedAncestorItemGlobalID;	// 40 = 0x28
    BRCItemGlobalID *_watchedAncestorItemGlobalID;	// 48 = 0x30
    BRFileObjectID *_watchedAncestorFileObjectID;	// 56 = 0x38
    NSString *_watchedAncestorFilenameToItem;	// 64 = 0x40
    BRCDataOrDocsScopeGatherer *_gatherer;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_gatherGroup;	// 80 = 0x50
    _Bool _hasUpdatesInFlight;	// 88 = 0x58
    unsigned long long _initialGatherMaxRank;	// 96 = 0x60
    unsigned long long _secondaryGatherMaxRank;	// 104 = 0x68
    BRCNotificationManager *_manager;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_queue;	// 120 = 0x78
    BRCListDirectoryContentsOperation *_listOp;	// 128 = 0x80
    int _watchKind;	// 136 = 0x88
    unsigned short _watchItemOptions;	// 140 = 0x8c
    NSString *_watchNamePrefix;	// 144 = 0x90
    NSString *_watchForBundleID;	// 152 = 0x98
    NSMutableSet *_externalAppLibraries;	// 160 = 0xa0
    NSSet *_watchedAppLibraries;	// 168 = 0xa8
    NSHashTable *_recursiveScopeListOps;	// 176 = 0xb0
    NSSet *_watchedAppLibraryIDs;	// 184 = 0xb8
    unsigned long long _watchedAppLibrariesFlags;	// 192 = 0xc0
    id <BRCNotificationPipeDelegate> _delegate;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000079291
@property(retain) NSString *watchedAncestorFilenameToItem; // @synthesize watchedAncestorFilenameToItem=_watchedAncestorFilenameToItem;
@property(retain) BRFileObjectID *watchedAncestorFileObjectID; // @synthesize watchedAncestorFileObjectID=_watchedAncestorFileObjectID;
@property(retain) BRCItemGlobalID *watchedAncestorItemGlobalID; // @synthesize watchedAncestorItemGlobalID=_watchedAncestorItemGlobalID;
@property(retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID; // @synthesize oldWatchedAncestorItemGlobalID=_oldWatchedAncestorItemGlobalID;
@property(nonatomic) __weak id <BRCNotificationPipeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BRCNotificationManager *manager; // @synthesize manager=_manager;
- (_Bool)isWatchingGlobalItemID:(id)arg1;	// IMP=0x00000000000791ae
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;	// IMP=0x000000000007916f
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;	// IMP=0x0000000000079131
- (void)_watchItem:(id)arg1 options:(unsigned short)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000077855
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000075da2
- (void)_performBlock:(CDUnknownBlockType)arg1 whenNotifsAreFullyFlushedInAppLibrary:(id)arg2 description:(id)arg3;	// IMP=0x0000000000075acf
- (void)_performBlock:(CDUnknownBlockType)arg1 whenNotifsAreFullyFlushedInClientZone:(id)arg2 description:(id)arg3;	// IMP=0x000000000007582a
- (void)__performBlockafterDBAndNotifFlush:(CDUnknownBlockType)arg1 session:(id)arg2 description:(id)arg3 error:(id)arg4;	// IMP=0x0000000000075167
- (void)close;	// IMP=0x0000000000075106
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;	// IMP=0x0000000000075097
- (void)_stopWatchingItems;	// IMP=0x0000000000074bf8
- (void)_gatherIfNeededAndFlushAsync;	// IMP=0x00000000000749c7
- (void)__flush;	// IMP=0x0000000000073f21
- (void)processUpdates:(id)arg1 withRank:(unsigned long long)arg2;	// IMP=0x00000000000737c3
- (void)_prepareForSecondGatherWithRank:(unsigned long long)arg1;	// IMP=0x000000000007358b
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000000073403
- (int)_isInterestingUpdate:(id)arg1;	// IMP=0x0000000000071f6a
@property(readonly, copy) NSString *description;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2 startingRank:(unsigned long long)arg3;	// IMP=0x00000000000719b6
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3 startingRank:(unsigned long long)arg4;	// IMP=0x00000000000716fc
- (id)_initWithManager:(id)arg1 startingRank:(unsigned long long)arg2;	// IMP=0x0000000000071637
- (void)addDequeueCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000715eb
- (void)addNotification:(id)arg1 asDead:(_Bool)arg2;	// IMP=0x000000000007139d
- (void)_registerAsWatcherIfNeeded;	// IMP=0x0000000000071324
- (void)dealloc;	// IMP=0x000000000007126c
- (oneway void)invalidate;	// IMP=0x000000000007a9ff
- (void)watchItemWithFileObjectID:(id)arg1 options:(unsigned short)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x000000000007a1df
- (void)boostPriority:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a01e
- (void)watchScopes:(unsigned short)arg1 gatherReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079bf0
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000797d5
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000079393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

