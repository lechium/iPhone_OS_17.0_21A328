//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NGMPBInnerMessage : PBCodable <NSCopying>
{
    unsigned int _counter;	// 8 = 0x8
    NSData *_debugInfo;	// 16 = 0x10
    NSData *_ktGossipData;	// 24 = 0x18
    NSData *_message;	// 32 = 0x20
    struct {
        unsigned int counter:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001c782
@property(retain, nonatomic) NSData *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(retain, nonatomic) NSData *ktGossipData; // @synthesize ktGossipData=_ktGossipData;
@property(nonatomic) unsigned int counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c660
- (unsigned long long)hash;	// IMP=0x000000000001c5c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c4b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c3d0
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c332
- (void)writeTo:(id)arg1;	// IMP=0x000000000001c288
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001c27b
- (id)dictionaryRepresentation;	// IMP=0x000000000001bf3c
- (id)description;	// IMP=0x000000000001be8d
@property(readonly, nonatomic) _Bool hasDebugInfo;
@property(readonly, nonatomic) _Bool hasKtGossipData;
@property(nonatomic) _Bool hasCounter;
- (id)attributes;	// IMP=0x000000000000c783

@end

