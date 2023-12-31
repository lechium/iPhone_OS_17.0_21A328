//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface _bmFMDatabasePool : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;	// 8 = 0x8
    NSMutableArray *_databaseInPool;	// 16 = 0x10
    NSMutableArray *_databaseOutPool;	// 24 = 0x18
    int _openFlags;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    id _delegate;	// 48 = 0x30
    unsigned long long _maximumNumberOfDatabasesToCreate;	// 56 = 0x38
    NSString *_vfsName;	// 64 = 0x40
}

+ (Class)databaseClass;	// IMP=0x004000000004940f
+ (id)databasePoolWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004909d
+ (id)databasePoolWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x0010000000049047
+ (id)databasePoolWithURL:(id)arg1;	// IMP=0x0010000000048fc4
+ (id)databasePoolWithPath:(id)arg1;	// IMP=0x0010000000048f7b
- (void).cxx_destruct;	// IMP=0x002000000004a01c
@property(copy) NSString *vfsName; // @synthesize vfsName=_vfsName;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property unsigned long long maximumNumberOfDatabasesToCreate; // @synthesize maximumNumberOfDatabasesToCreate=_maximumNumberOfDatabasesToCreate;
@property id delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *path; // @synthesize path=_path;
- (id)inSavePoint:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049e1a
- (void)inImmediateTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049e00
- (void)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049de9
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049dcf
- (void)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049db8
- (void)beginTransaction:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049cf4
- (void)inDatabase:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049c78
- (void)releaseAllDatabases;	// IMP=0x0010000000049be9
@property(readonly, nonatomic) unsigned long long countOfOpenDatabases;
@property(readonly, nonatomic) unsigned long long countOfCheckedOutDatabases;
@property(readonly, nonatomic) unsigned long long countOfCheckedInDatabases;
- (id)db;	// IMP=0x00100000000495c4
- (void)pushDatabaseBackInPool:(id)arg1;	// IMP=0x0010000000049481
- (void)executeLocked:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049470
- (void)dealloc;	// IMP=0x0010000000049420
- (id)init;	// IMP=0x00100000000493fb
- (id)initWithURL:(id)arg1;	// IMP=0x00100000000493a5
- (id)initWithPath:(id)arg1;	// IMP=0x001000000004938e
- (id)initWithURL:(id)arg1 flags:(int)arg2;	// IMP=0x0010000000049332
- (id)initWithPath:(id)arg1 flags:(int)arg2;	// IMP=0x001000000004931d
- (id)initWithPath:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x00100000000491a4
- (id)initWithURL:(id)arg1 flags:(int)arg2 vfs:(id)arg3;	// IMP=0x0010000000049126

@end

