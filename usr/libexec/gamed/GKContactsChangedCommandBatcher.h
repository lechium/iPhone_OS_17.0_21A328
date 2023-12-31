//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKContactsCacheUpdateBatchEndCommand, GKContactsCacheUpdateBatchStartCommand, GKContactsCacheUpdateFinishedCommand, GKPlayerInternalProvider, NSError, NSMutableSet, NSString;

@interface GKContactsChangedCommandBatcher : NSObject
{
    NSError *_error;	// 8 = 0x8
    GKContactsCacheUpdateBatchStartCommand *_batchStartCommand;	// 16 = 0x10
    GKContactsCacheUpdateBatchEndCommand *_batchEndCommand;	// 24 = 0x18
    GKContactsCacheUpdateFinishedCommand *_finishedCommand;	// 32 = 0x20
    NSString *_meContactID;	// 40 = 0x28
    GKPlayerInternalProvider *_playerProvider;	// 48 = 0x30
    NSMutableSet *_commands;	// 56 = 0x38
    unsigned long long _batchSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000191638
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSMutableSet *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) GKPlayerInternalProvider *playerProvider; // @synthesize playerProvider=_playerProvider;
@property(copy, nonatomic) NSString *meContactID; // @synthesize meContactID=_meContactID;
@property(retain, nonatomic) GKContactsCacheUpdateFinishedCommand *finishedCommand; // @synthesize finishedCommand=_finishedCommand;
@property(retain, nonatomic) GKContactsCacheUpdateBatchEndCommand *batchEndCommand; // @synthesize batchEndCommand=_batchEndCommand;
@property(retain, nonatomic) GKContactsCacheUpdateBatchStartCommand *batchStartCommand; // @synthesize batchStartCommand=_batchStartCommand;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)finishWithContext:(id)arg1;	// IMP=0x00100000001914c8
- (void)finish;	// IMP=0x0010000000191386
- (id)executeCommandsWithContext:(id)arg1;	// IMP=0x0010000000190c43
- (void)addCommand:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000190b8b
- (_Bool)shouldExecuteCommands;	// IMP=0x0010000000190b2a
- (void)addCommand:(id)arg1;	// IMP=0x001000000019096f
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x00100000001908b2
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x0010000000190879
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x00100000001907df
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x0010000000190722
- (id)initWithPlayerProvider:(id)arg1 meContactID:(id)arg2 batchSize:(unsigned long long)arg3 batchStartCommand:(id)arg4 batchEndCommand:(id)arg5 finishedCommand:(id)arg6;	// IMP=0x00100000001905e9
- (id)initWithPlayerProvider:(id)arg1 meContactID:(id)arg2 batchSize:(unsigned long long)arg3 finishedCommand:(id)arg4;	// IMP=0x001000000019051f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

