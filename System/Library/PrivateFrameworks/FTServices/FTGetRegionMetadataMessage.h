//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSDictionary, NSString;

@interface FTGetRegionMetadataMessage : IDSBaseMessage
{
    NSString *_language;	// 232 = 0xe8
    NSDictionary *_responseRegionInformation;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x000000000002ba8a
@property(copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;
@property(copy) NSString *language; // @synthesize language=_language;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x000000000002b9e3
- (id)messageBody;	// IMP=0x000000000002b965
- (id)requiredKeys;	// IMP=0x000000000002b92b
- (id)bagKey;	// IMP=0x000000000002b91e
- (_Bool)wantsHTTPGet;	// IMP=0x000000000002b916
- (long long)responseCommand;	// IMP=0x000000000002b90b
- (long long)command;	// IMP=0x000000000002b900
- (_Bool)wantsBinaryPush;	// IMP=0x000000000002b8f8
- (_Bool)wantsCompressedBody;	// IMP=0x000000000002b8f0
- (_Bool)wantsHTTPHeaders;	// IMP=0x000000000002b8e8
- (_Bool)wantsBagKey;	// IMP=0x000000000002b8e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b82f
- (id)init;	// IMP=0x000000000002b767

@end

