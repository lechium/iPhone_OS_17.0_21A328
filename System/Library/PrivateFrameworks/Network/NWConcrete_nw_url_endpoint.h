//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_url_endpoint
{
    struct __CFURL *url_ref;	// 232 = 0xe8
    unsigned short port;	// 240 = 0xf0
    char *url;	// 248 = 0xf8
    char *scheme;	// 256 = 0x100
    char *hostname;	// 264 = 0x108
    char *path;	// 272 = 0x110
    char *sanitized_url;	// 280 = 0x118
    char url_hash[9];	// 288 = 0x120
    unsigned int inferred_port:1;	// 297 = 0x129
    unsigned int __pad_bits:7;	// 297 = 0x129
    struct os_unfair_lock_s lock;	// 300 = 0x12c
}

- (unsigned long long)getHash;	// IMP=0x00000000005cb7e0
- (id)copyEndpoint;	// IMP=0x00000000005cb720
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x00000000005cb680
- (char *)createDescription:(_Bool)arg1;	// IMP=0x00000000005cb3f0
- (const char *)domainForPolicy;	// IMP=0x00000000005cb3d0
- (id)copyDictionary;	// IMP=0x00000000005cb340
- (unsigned short)port;	// IMP=0x00000000005cb320
- (const char *)hostname;	// IMP=0x00000000005cb300
- (unsigned int)type;	// IMP=0x00000000005cb2f0
- (void)dealloc;	// IMP=0x00000000005cb1d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

