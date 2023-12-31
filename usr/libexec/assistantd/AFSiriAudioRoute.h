//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFSiriAudioRoute : NSObject
{
    NSString *_productID;	// 8 = 0x8
    NSString *_btAddress;	// 16 = 0x10
    unsigned long long _availableAnnouncementRequestTypes;	// 24 = 0x18
    NSDictionary *_avscRouteDescription;	// 32 = 0x20
    long long _announcePlatformForRoute;	// 40 = 0x28
    _Bool _hearingAidsAnnounceEnabled;	// 48 = 0x30
    _Bool _builtInSpeakerAnnounceEnabled;	// 49 = 0x31
    _Bool _isRouteCurrentlyPicked;	// 50 = 0x32
    _Bool _isDoAPCapable;	// 51 = 0x33
    _Bool _isHeadsetInEar;	// 52 = 0x34
    _Bool _headsetSupportsIED;	// 53 = 0x35
    _Bool _headsetSupportsFauxIED;	// 54 = 0x36
    _Bool _inEarDetectEnabledSpecified;	// 55 = 0x37
    _Bool _inEarDetectEnabled;	// 56 = 0x38
    _Bool _headsetSupportsAnnounceCalls;	// 57 = 0x39
    _Bool _isTipiRoute;	// 58 = 0x3a
    _Bool _isOtherDeviceConnected;	// 59 = 0x3b
    _Bool _isInTriangleMode;	// 60 = 0x3c
    _Bool _shouldTakeRouteFromOtherConnectedDevice;	// 61 = 0x3d
    _Bool _shouldDeferToOtherConnectedDevice;	// 62 = 0x3e
    _Bool _isHearingAidsRoute;	// 63 = 0x3f
    _Bool _isBuiltInSpeakerRoute;	// 64 = 0x40
    _Bool _isGenuineAppleAccessory;	// 65 = 0x41
    NSString *_avAudioRouteName;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000009f6da
@property(nonatomic) long long announcePlatformForRoute; // @synthesize announcePlatformForRoute=_announcePlatformForRoute;
@property(retain, nonatomic) NSDictionary *avscRouteDescription; // @synthesize avscRouteDescription=_avscRouteDescription;
@property(nonatomic) unsigned long long availableAnnouncementRequestTypes; // @synthesize availableAnnouncementRequestTypes=_availableAnnouncementRequestTypes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *btAddress; // @synthesize btAddress=_btAddress;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009f60e
- (_Bool)isEqualToRoute:(id)arg1;	// IMP=0x001000000009f3f8
- (unsigned long long)hash;	// IMP=0x001000000009f30c
- (_Bool)hasAuthenticationCapability;	// IMP=0x001000000009f2d7
- (id)routeName;	// IMP=0x001000000009f2c9
- (_Bool)isRouteCurrentlyPicked;	// IMP=0x001000000009f2c0
- (long long)_announcementPlatform;	// IMP=0x001000000009f27e
- (_Bool)_isHearingAidsRoute;	// IMP=0x001000000009f276
- (_Bool)_isBuiltInSpeakerRoute;	// IMP=0x001000000009f26e
- (_Bool)isThirdPartyBluetoothHeadset;	// IMP=0x001000000009f266
- (unsigned long long)_getRouteCapabilities;	// IMP=0x001000000009f25e
- (void)_initializeInternalState;	// IMP=0x001000000009f258
- (id)initWithRouteDescription:(id)arg1 hearingAidsAnnounceEnabled:(_Bool)arg2 builtInSpeakerAnnounceEnabled:(_Bool)arg3;	// IMP=0x001000000009f229

@end

