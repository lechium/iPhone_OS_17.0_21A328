//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSString;
@protocol OS_dispatch_queue;

@interface CKIDSService : NSObject
{
    IDSService *_classAService;	// 8 = 0x8
    IDSService *_classCService;	// 16 = 0x10
    IDSService *_tinkerMessagesActivationService;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000060a0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSService *tinkerMessagesActivationService; // @synthesize tinkerMessagesActivationService=_tinkerMessagesActivationService;
@property(retain, nonatomic) IDSService *classCService; // @synthesize classCService=_classCService;
@property(retain, nonatomic) IDSService *classAService; // @synthesize classAService=_classAService;
- (_Bool)sendFile:(id)arg1 onService:(id)arg2;	// IMP=0x0010000000005ee8
- (_Bool)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 service:(id)arg3 fireAndForget:(_Bool)arg4 includeInactiveDevices:(_Bool)arg5;	// IMP=0x00100000000059e1
- (id)init;	// IMP=0x0010000000005862

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
