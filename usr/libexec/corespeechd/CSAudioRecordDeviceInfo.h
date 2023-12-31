//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject
{
    _Bool _isRemoteDevice;	// 8 = 0x8
    NSString *_route;	// 16 = 0x10
    NSUUID *_remoteDeviceUID;	// 24 = 0x18
    NSString *_remoteDeviceProductIdentifier;	// 32 = 0x20
    NSString *_remoteDeviceUIDString;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000bba75
- (void).cxx_destruct;	// IMP=0x00200000000bba37
@property(readonly, copy, nonatomic) NSString *remoteDeviceUIDString; // @synthesize remoteDeviceUIDString=_remoteDeviceUIDString;
@property(readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // @synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier;
@property(readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;	// IMP=0x00100000000bb908
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000bb788
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000bb6b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000bb6a8
- (id)description;	// IMP=0x00100000000bb60c
- (id)xpcObject;	// IMP=0x00100000000bb4be
- (id)initWithXPCObject:(id)arg1;	// IMP=0x00100000000bb27d
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 remoteDeviceUIDString:(id)arg5;	// IMP=0x00100000000bb160
- (id)initWithRoute:(id)arg1 isRemoteDevice:(_Bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;	// IMP=0x00100000000bb13d

@end

