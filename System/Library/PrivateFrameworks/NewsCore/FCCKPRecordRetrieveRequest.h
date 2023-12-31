//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class FCCKPRecordIdentifier, FCCKPRequestedFields, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPRecordRetrieveRequest : PBRequest
{
    NSString *_clientVersionETag;	// 8 = 0x8
    FCCKPRecordIdentifier *_recordIdentifier;	// 16 = 0x10
    FCCKPRequestedFields *_requestedFields;	// 24 = 0x18
    NSString *_versionETag;	// 32 = 0x20
}

+ (id)options;	// IMP=0x0010000000295110
- (void).cxx_destruct;	// IMP=0x0000000000295907
- (unsigned long long)hash;	// IMP=0x000000000029583a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029572e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000295644
- (Class)responseClass;	// IMP=0x0000000000295633
- (unsigned int)requestTypeCode;	// IMP=0x0000000000295628
- (void)writeTo:(id)arg1;	// IMP=0x0000000000295591
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000295584
- (id)dictionaryRepresentation;	// IMP=0x000000000029520f
- (id)description;	// IMP=0x0000000000295160

@end

