//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSCoreSpeechServicesAccessoryInfo, NSNumber, NSString, NSUUID;

@interface CSVoiceTriggerRTModelRequestOptions : NSObject
{
    _Bool _allowMph;	// 8 = 0x8
    NSNumber *_userSelectedPhraseType;	// 16 = 0x10
    NSUUID *_endpointId;	// 24 = 0x18
    NSNumber *_engineMajorVersion;	// 32 = 0x20
    NSNumber *_engineMinorVersion;	// 40 = 0x28
    NSNumber *_accessoryModelType;	// 48 = 0x30
    NSString *_siriLocale;	// 56 = 0x38
    CSCoreSpeechServicesAccessoryInfo *_accessoryInfo;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000b37d9
- (void).cxx_destruct;	// IMP=0x00200000000b3071
@property(readonly, copy, nonatomic) CSCoreSpeechServicesAccessoryInfo *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property(readonly, nonatomic) NSString *siriLocale; // @synthesize siriLocale=_siriLocale;
@property(readonly, nonatomic) NSNumber *accessoryModelType; // @synthesize accessoryModelType=_accessoryModelType;
@property(readonly, nonatomic) NSNumber *engineMinorVersion; // @synthesize engineMinorVersion=_engineMinorVersion;
@property(readonly, nonatomic) NSNumber *engineMajorVersion; // @synthesize engineMajorVersion=_engineMajorVersion;
@property(readonly, nonatomic) NSUUID *endpointId; // @synthesize endpointId=_endpointId;
@property(readonly, nonatomic) NSNumber *userSelectedPhraseType; // @synthesize userSelectedPhraseType=_userSelectedPhraseType;
@property(readonly, nonatomic) _Bool allowMph; // @synthesize allowMph=_allowMph;
- (id)description;	// IMP=0x00100000000b2fcd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b2ee3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b2c12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b2b5c
- (id)initWithCSRTModelRequestOptions:(id)arg1 builder:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b2a93
- (id)initWithMutableBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b28f7

@end

