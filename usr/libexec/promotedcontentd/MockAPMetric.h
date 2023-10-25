//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface MockAPMetric : NSObject
{
    _Bool _areNetworkDates;	// 8 = 0x8
    long long _purpose;	// 16 = 0x10
    long long _metric;	// 24 = 0x18
    NSDate *_timestamp;	// 32 = 0x20
    NSString *_contentIdentifier;	// 40 = 0x28
    NSString *_contextIdentifier;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    NSString *_os;	// 64 = 0x40
    NSString *_osVersion;	// 72 = 0x48
    NSString *_osBuild;	// 80 = 0x50
    NSString *_deviceModel;	// 88 = 0x58
    NSString *_clientIdentifier;	// 96 = 0x60
    NSString *_deviceIdentifier;	// 104 = 0x68
    NSString *_userIdentifier;	// 112 = 0x70
    NSDictionary *_properties;	// 120 = 0x78
    NSDictionary *_internalProperties;	// 128 = 0x80
    long long _options;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000100987
- (void).cxx_destruct;	// IMP=0x0020000000100b97
@property(readonly, nonatomic) _Bool areNetworkDates; // @synthesize areNetworkDates=_areNetworkDates;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSDictionary *internalProperties; // @synthesize internalProperties=_internalProperties;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *os; // @synthesize os=_os;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) long long purpose; // @synthesize purpose=_purpose;
- (void)addInternalPropertyValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000100ae2
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)initWithPurpose:(long long)arg1 metric:(long long)arg2 contentIdentifier:(id)arg3 contextIdentifier:(id)arg4 identifier:(id)arg5 branches:(id)arg6 properties:(id)arg7 internalProperties:(id)arg8 relayData:(id)arg9 environment:(id)arg10 order:(long long)arg11 options:(long long)arg12;	// IMP=0x0010000000100a1c
- (id)initWithPurpose:(long long)arg1 metric:(long long)arg2 contentIdentifier:(id)arg3 contextIdentifier:(id)arg4 identifier:(id)arg5 properties:(id)arg6 internalProperties:(id)arg7 options:(long long)arg8;	// IMP=0x00100000001009b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001009a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000010099c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000010098f

// Remaining properties
@property(retain, nonatomic) NSArray *branches;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *environment;
@property(retain, nonatomic) NSString *handle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long order;
@property(readonly, nonatomic) NSDictionary *relayData;
@property(nonatomic) unsigned int source;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *trace;

@end
