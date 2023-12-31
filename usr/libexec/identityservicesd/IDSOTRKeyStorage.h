//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary, NSRecursiveLock;

@interface IDSOTRKeyStorage : NSObject
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_sessionKeyStorage;	// 16 = 0x10
    IMTimer *_purgeTimer;	// 24 = 0x18
    IMTimer *_saveTimer;	// 32 = 0x20
    CDUnknownBlockType _saveCancelBlock;	// 40 = 0x28
    CDUnknownBlockType _saveEnqueueBlock;	// 48 = 0x30
    CDUnknownBlockType _purgeCancelBlock;	// 56 = 0x38
    CDUnknownBlockType _purgeEnqueueBlock;	// 64 = 0x40
    _Bool _isClassDStoreAvailable;	// 72 = 0x48
    _Bool _isClassCStoreAvailable;	// 73 = 0x49
    _Bool _isClassAStoreAvailable;	// 74 = 0x4a
    _Bool _changedSinceLastSave;	// 75 = 0x4b
}

+ (id)sharedInstance;	// IMP=0x0040000000282cfa
- (void).cxx_destruct;	// IMP=0x0020000000285bee
- (void)removeSessionKeyForAllTokenFromMainQueue;	// IMP=0x0010000000285998
- (void)removeSessionKeyForToken:(id)arg1;	// IMP=0x001000000028583c
- (void)storeSessionKey:(id)arg1 token:(id)arg2;	// IMP=0x0010000000285695
- (void)_purgeMap;	// IMP=0x001000000028568f
- (void)_setSaveTimer;	// IMP=0x001000000028565c
- (void)_saveNow;	// IMP=0x0010000000285565
- (id)sessionKeyForToken:(id)arg1;	// IMP=0x0010000000285348
- (void)_daemonWillShutdown:(id)arg1;	// IMP=0x001000000028532d
- (void)unlock;	// IMP=0x0010000000285317
- (void)lock;	// IMP=0x0010000000285301
- (void)dealloc;	// IMP=0x001000000028528c
- (void)_purgeTimerFiredOnMain;	// IMP=0x001000000028520d
- (void)_saveTimerFiredOnMain;	// IMP=0x001000000028518e
- (id)init;	// IMP=0x0010000000284c89
- (void)_removeObjectForKey:(id)arg1;	// IMP=0x00100000002849b5
- (id)_objectForKey:(id)arg1;	// IMP=0x0010000000284611
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000284168
- (_Bool)isSessionStoreAvailableForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000002840f6
- (void)loadStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000002836fe
- (void)_loadIfNeeded;	// IMP=0x0010000000283699
- (_Bool)__saveStoreForDataProtectionClass:(unsigned int)arg1;	// IMP=0x001000000028339c
- (void)_save;	// IMP=0x0010000000283143
- (void)systemDidEnterDataProtectionLock;	// IMP=0x0010000000283074
- (void)systemDidLeaveDataProtectionLock;	// IMP=0x0010000000282eb6
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0010000000282de5
- (_Bool)isUnderLock;	// IMP=0x0010000000282d9a
- (_Bool)_isUnderFirstDataProtectionLock;	// IMP=0x0010000000282d4f

@end

