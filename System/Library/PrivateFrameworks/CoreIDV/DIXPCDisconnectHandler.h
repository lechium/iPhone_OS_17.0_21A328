//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface DIXPCDisconnectHandler : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isDisconnected;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSMutableDictionary *_disconnectCallbacks;	// 24 = 0x18
    NSMutableDictionary *_disconnectResultCallbacks;	// 32 = 0x20
    NSMutableDictionary *_disconnectOptionCallbacks;	// 40 = 0x28
    NSString *_disconnectErrorDomain;	// 48 = 0x30
    long long _disconnectErrorCode;	// 56 = 0x38
    NSObject<OS_os_log> *_logger;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000303a
@property(readonly, nonatomic) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
@property(nonatomic) long long disconnectErrorCode; // @synthesize disconnectErrorCode=_disconnectErrorCode;
@property(retain, nonatomic) NSString *disconnectErrorDomain; // @synthesize disconnectErrorDomain=_disconnectErrorDomain;
@property(retain, nonatomic) NSMutableDictionary *disconnectOptionCallbacks; // @synthesize disconnectOptionCallbacks=_disconnectOptionCallbacks;
@property(retain, nonatomic) NSMutableDictionary *disconnectResultCallbacks; // @synthesize disconnectResultCallbacks=_disconnectResultCallbacks;
@property(retain, nonatomic) NSMutableDictionary *disconnectCallbacks; // @synthesize disconnectCallbacks=_disconnectCallbacks;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isDisconnected; // @synthesize isDisconnected=_isDisconnected;
- (id)randomCallbackIdentifier;	// IMP=0x0000000000002f2c
- (id)createDaemonDisconnectedError;	// IMP=0x0000000000002d29
- (void)handleInterruption;	// IMP=0x0000000000002912
- (void)unregisterOptionResultCallback:(id)arg1;	// IMP=0x000000000000289a
- (id)registerOptionResultCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000027e2
- (void)unregisterResultCallback:(id)arg1;	// IMP=0x000000000000276a
- (id)registerResultCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000026b2
- (void)unregisterCallback:(id)arg1;	// IMP=0x000000000000263a
- (id)registerCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002582
- (void)configureHandlersForConnection:(id)arg1;	// IMP=0x00000000000023f0
- (id)initWithName:(id)arg1 errorDomain:(id)arg2 errorCode:(long long)arg3 logger:(id)arg4;	// IMP=0x0000000000002280

@end

