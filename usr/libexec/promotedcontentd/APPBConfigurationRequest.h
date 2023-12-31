//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSMutableArray;

@interface APPBConfigurationRequest : PBRequest
{
    NSMutableArray *_currentConfigurations;	// 8 = 0x8
    NSData *_iAdID;	// 16 = 0x10
}

+ (Class)currentConfigurationType;	// IMP=0x002000000004a21c
+ (id)options;	// IMP=0x001000000004a10b
- (void).cxx_destruct;	// IMP=0x002000000004ae51
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(retain, nonatomic) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004ac8d
- (unsigned long long)hash;	// IMP=0x001000000004ac40
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004ab88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004a97c
- (void)copyTo:(id)arg1;	// IMP=0x001000000004a894
- (void)writeTo:(id)arg1;	// IMP=0x001000000004a734
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004a727
- (id)dictionaryRepresentation;	// IMP=0x001000000004a2f1
- (id)description;	// IMP=0x001000000004a242
@property(readonly, nonatomic) _Bool hasIAdID;
- (id)currentConfigurationAtIndex:(unsigned long long)arg1;	// IMP=0x001000000004a1ff
- (unsigned long long)currentConfigurationsCount;	// IMP=0x001000000004a1e2
- (void)addCurrentConfiguration:(id)arg1;	// IMP=0x001000000004a178
- (void)clearCurrentConfigurations;	// IMP=0x001000000004a15b

@end

