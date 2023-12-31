//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x004000000004a1cb
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a166
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a110
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x001000000004a0ae
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x001000000004a065
- (void).cxx_destruct;	// IMP=0x002000000004af6c
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x001000000004adaf
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004ad8a
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x000000000004ad63
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aa63
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aa49
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aa32
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aa18
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000004aa01
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a806
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x001000000004a6d2
- (id)database;	// IMP=0x001000000004a609
- (void)interrupt;	// IMP=0x001000000004a5cc
- (void)close;	// IMP=0x001000000004a547
- (void)dealloc;	// IMP=0x001000000004a4ff
- (id)init;	// IMP=0x001000000004a4eb
- (id)initWithPath:(id)arg1;	// IMP=0x001000000004a4d1
- (id)initWithURL:(id)arg1;	// IMP=0x001000000004a47b
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a41f
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004a40a
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x001000000004a25a
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x001000000004a1dc

@end

