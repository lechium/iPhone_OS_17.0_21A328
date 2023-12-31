//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_bonjour_service_endpoint
{
    char *service_name;	// 232 = 0xe8
    char *service_type;	// 240 = 0xf0
    char *service_domain;	// 248 = 0xf8
    char *service_composite;	// 256 = 0x100
}

- (unsigned long long)getHash;	// IMP=0x0000000000211cc0
- (id)copyEndpoint;	// IMP=0x0000000000211c90
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x0000000000211bf0
- (char *)createDescription:(_Bool)arg1;	// IMP=0x0000000000211950
- (const char *)domainForPolicy;	// IMP=0x0000000000211930
- (id)copyDictionary;	// IMP=0x0000000000211860
- (unsigned int)type;	// IMP=0x0000000000211850
- (void)dealloc;	// IMP=0x00000000002117a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

