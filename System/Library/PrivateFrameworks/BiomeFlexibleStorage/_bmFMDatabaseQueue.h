//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _bmFMDatabase;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _bmFMDatabaseQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _bmFMDatabase *_db;	// 16 = 0x10
    int _openFlags;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSString *_vfsName;	// 40 = 0x28
}

+ (Class)databaseClass;	// IMP=0x0060000000013602
+ (id)databaseQueueWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x006000000001359d
+ (id)databaseQueueWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0060000000013547
+ (id)databaseQueueWithURL:(id)arg1;	// IMP=0x00600000000134e5
+ (id)databaseQueueWithPath:(id)arg1;	// IMP=0x006000000001349c
- (void).cxx_destruct;	// IMP=0x000000000001448c
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property(retain) NSString *path; // @synthesize path=_path;
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 logFrameCount:(int *)arg3 checkpointCount:(int *)arg4 error:(id *)arg5;	// IMP=0x000000000001428b
- (_Bool)checkpoint:(int)arg1 name:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014266
- (_Bool)checkpoint:(int)arg1 error:(id *)arg2;	// IMP=0x000000000001423f
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013eca
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013eb0
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013e99
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013e7f
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013e68
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013c6d
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013b09
- (id)database;	// IMP=0x0000000000013a40
- (void)interrupt;	// IMP=0x0000000000013a03
- (void)close;	// IMP=0x000000000001397e
- (void)dealloc;	// IMP=0x0000000000013936
- (id)init;	// IMP=0x0000000000013922
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000013908
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000138b2
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000013856
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0000000000013841
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0000000000013691
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0000000000013613

@end
