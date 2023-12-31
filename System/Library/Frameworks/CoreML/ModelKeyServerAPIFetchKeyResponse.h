//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ModelKeyServerAPIFetchKeyResult, ModelKeyServerAPIResultError;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIFetchKeyResponse : PBCodable
{
    ModelKeyServerAPIResultError *_error;	// 8 = 0x8
    int _result;	// 16 = 0x10
    ModelKeyServerAPIFetchKeyResult *_success;	// 24 = 0x18
    struct {
        unsigned int result:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a1571
@property(retain, nonatomic) ModelKeyServerAPIResultError *error; // @synthesize error=_error;
@property(retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a14a0
- (unsigned long long)hash;	// IMP=0x00000000000a1420
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a133d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a127a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a11f7
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a119a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a0eec
- (id)dictionaryRepresentation;	// IMP=0x00000000000a0da0
- (id)description;	// IMP=0x00000000000a0cf1
- (void)clearOneofValuesForResult;	// IMP=0x00000000000a0c91
- (int)StringAsResult:(id)arg1;	// IMP=0x00000000000a0bfa
- (id)resultAsString:(int)arg1;	// IMP=0x00000000000a0bb2
@property(nonatomic) _Bool hasResult;
@property(nonatomic) int result; // @synthesize result=_result;
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasSuccess;

@end

