//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBluetoothServiceAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000795bfa
+ (id)getSilo;	// IMP=0x00100000007959e6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000007959cd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000795970
- (void)fetchIsBluetoothPoweredWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0020000000795cae
- (void)scan;	// IMP=0x0010000000795c93
- (_Bool)syncgetHasConnectedDevices;	// IMP=0x0010000000795c75
- (void)fetchHasConnectedDevicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000795c40
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000795bd2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000795ba5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000795b7d
- (void *)adaptee;	// IMP=0x0010000000795b4a
- (void)endService;	// IMP=0x0010000000795b2f
- (void)beginService;	// IMP=0x0010000000795a7f
- (id)init;	// IMP=0x0010000000795a42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

