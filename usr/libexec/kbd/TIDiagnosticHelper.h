//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMachPort, NSMutableDictionary, NSString;

@interface TIDiagnosticHelper : NSObject
{
    NSMutableDictionary *_handlers;	// 8 = 0x8
    NSMachPort *_port;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000038f6
- (void).cxx_destruct;	// IMP=0x002000000000403e
- (void)unregisterSignalHandler:(id)arg1;	// IMP=0x0010000000003f3b
- (id)registerForSignal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003d58
- (void)handleMachMessage:(void *)arg1;	// IMP=0x0010000000003c09
- (void)dealloc;	// IMP=0x0010000000003a4f
- (id)init;	// IMP=0x001000000000394b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
