//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CSDMessagingLinkSyncCheckInMessage : PBCodable
{
    NSMutableArray *_generateDescriptorInfos;	// 8 = 0x8
    NSMutableArray *_generatorDescriptors;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _shouldCheckAllGenerators;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int shouldCheckAllGenerators:1;
    } _has;	// 32 = 0x20
}

+ (Class)generateDescriptorInfosType;	// IMP=0x00200000001e9781
+ (Class)generatorDescriptorsType;	// IMP=0x00100000001e96af
- (void).cxx_destruct;	// IMP=0x00200000001eac20
@property(retain, nonatomic) NSMutableArray *generateDescriptorInfos; // @synthesize generateDescriptorInfos=_generateDescriptorInfos;
@property(retain, nonatomic) NSMutableArray *generatorDescriptors; // @synthesize generatorDescriptors=_generatorDescriptors;
@property(nonatomic) _Bool shouldCheckAllGenerators; // @synthesize shouldCheckAllGenerators=_shouldCheckAllGenerators;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ea938
- (unsigned long long)hash;	// IMP=0x00100000001ea89c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ea782
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ea434
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ea2a3
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ea045
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ea038
- (id)dictionaryRepresentation;	// IMP=0x00100000001e9841
- (id)description;	// IMP=0x00100000001e9792
- (id)generateDescriptorInfosAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001e9764
- (unsigned long long)generateDescriptorInfosCount;	// IMP=0x00100000001e9747
- (void)addGenerateDescriptorInfos:(id)arg1;	// IMP=0x00100000001e96dd
- (void)clearGenerateDescriptorInfos;	// IMP=0x00100000001e96c0
- (id)generatorDescriptorsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001e9692
- (unsigned long long)generatorDescriptorsCount;	// IMP=0x00100000001e9675
- (void)addGeneratorDescriptors:(id)arg1;	// IMP=0x00100000001e960b
- (void)clearGeneratorDescriptors;	// IMP=0x00100000001e95ee
@property(nonatomic) _Bool hasShouldCheckAllGenerators;
@property(nonatomic) _Bool hasVersion;

@end

