//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPServerInfo : PBCodable
{
    NSString *_partition;	// 8 = 0x8
    NSString *_serviceBuild;	// 16 = 0x10
    NSString *_serviceInstance;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000025e58
@property(retain, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property(retain, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000025d21
- (unsigned long long)hash;	// IMP=0x0000000000025c9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025b91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025aa7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000025a04
- (void)writeTo:(id)arg1;	// IMP=0x000000000002596d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000025960
- (id)dictionaryRepresentation;	// IMP=0x00000000000256cb
- (id)description;	// IMP=0x000000000002561c
@property(readonly, nonatomic) _Bool hasServiceInstance;
@property(readonly, nonatomic) _Bool hasServiceBuild;
@property(readonly, nonatomic) _Bool hasPartition;
@property(readonly, nonatomic) _Bool hasServiceName;

@end

