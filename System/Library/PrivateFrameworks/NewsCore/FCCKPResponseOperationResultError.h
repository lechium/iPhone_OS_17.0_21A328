//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension, FCCKPResponseOperationResultErrorServer, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPResponseOperationResultError : PBCodable
{
    FCCKPResponseOperationResultErrorClient *_clientError;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_errorKey;	// 24 = 0x18
    FCCKPResponseOperationResultErrorExtension *_extensionError;	// 32 = 0x20
    int _retryAfterSeconds;	// 40 = 0x28
    FCCKPResponseOperationResultErrorServer *_serverError;	// 48 = 0x30
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000028ca83
- (unsigned long long)hash;	// IMP=0x000000000028c9ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028c83f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028c703
- (void)writeTo:(id)arg1;	// IMP=0x000000000028c629
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000028c61c
- (id)dictionaryRepresentation;	// IMP=0x000000000028c106
- (id)description;	// IMP=0x000000000028c057

@end
