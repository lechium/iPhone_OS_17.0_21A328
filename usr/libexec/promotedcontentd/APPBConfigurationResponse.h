//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface APPBConfigurationResponse : PBCodable
{
    int _bannerProxyType;	// 8 = 0x8
    NSString *_configVersion;	// 16 = 0x10
    NSMutableArray *_theConfigurations;	// 24 = 0x18
    NSString *_resourceConnectProxyURL;	// 32 = 0x20
    NSString *_resourceProxyURL;	// 40 = 0x28
    struct {
        unsigned int bannerProxyType:1;
    } _has;	// 48 = 0x30
}

+ (Class)theConfigurationType;	// IMP=0x002000000003ff45
- (void).cxx_destruct;	// IMP=0x0020000000041167
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property(retain, nonatomic) NSString *resourceProxyURL; // @synthesize resourceProxyURL=_resourceProxyURL;
@property(retain, nonatomic) NSMutableArray *theConfigurations; // @synthesize theConfigurations=_theConfigurations;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000040ee2
- (unsigned long long)hash;	// IMP=0x0010000000040e35
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000040cfa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000040a68
- (void)copyTo:(id)arg1;	// IMP=0x001000000004091d
- (void)writeTo:(id)arg1;	// IMP=0x001000000004075d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000040750
- (id)dictionaryRepresentation;	// IMP=0x0010000000040162
- (id)description;	// IMP=0x00100000000400b3
@property(readonly, nonatomic) _Bool hasConfigVersion;
- (int)StringAsBannerProxyType:(id)arg1;	// IMP=0x0010000000040039
- (id)bannerProxyTypeAsString:(int)arg1;	// IMP=0x001000000003ffe4
@property(nonatomic) _Bool hasBannerProxyType;
@property(nonatomic) int bannerProxyType; // @synthesize bannerProxyType=_bannerProxyType;
@property(readonly, nonatomic) _Bool hasResourceConnectProxyURL;
@property(readonly, nonatomic) _Bool hasResourceProxyURL;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;	// IMP=0x001000000003ff28
- (unsigned long long)theConfigurationsCount;	// IMP=0x001000000003ff0b
- (void)addTheConfiguration:(id)arg1;	// IMP=0x001000000003fea1
- (void)clearTheConfigurations;	// IMP=0x001000000003fe84

@end
