//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSXPCListener;

@interface TIKeyboardInputManagerServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSDate *_lastFlush;	// 16 = 0x10
}

+ (id)sharedKeyboardInputManagerServer;	// IMP=0x0020000000007841
- (void).cxx_destruct;	// IMP=0x00200000000085fc
- (void)prepareForActivity;	// IMP=0x0010000000008531
- (void)checkAndFlushDynamicCaches;	// IMP=0x0000000000008312
- (void)prepareForInactivity;	// IMP=0x001000000000822a
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;	// IMP=0x0010000000008143
- (void)keyboardActivityDidTransition:(id)arg1;	// IMP=0x00100000000080d8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000007d2c
- (id)reduceCacheToSize:(int)arg1;	// IMP=0x0010000000007c2a
- (void)appleKeyboardsSettingsChanged:(id)arg1;	// IMP=0x0010000000007b70
- (id)init;	// IMP=0x0010000000007993
- (void)dealloc;	// IMP=0x00100000000078c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

