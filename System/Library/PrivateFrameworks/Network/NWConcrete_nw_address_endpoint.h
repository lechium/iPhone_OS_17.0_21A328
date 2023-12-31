//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_address_endpoint
{
    struct sockaddr_storage address;	// 232 = 0xe8
    struct ether_addr ethernet_address;	// 360 = 0x168
    NSObject<OS_dispatch_data> *ech_config;	// 368 = 0x170
    char *hostname;	// 376 = 0x178
    int original_fd;	// 384 = 0x180
    unsigned short priority;	// 388 = 0x184
    unsigned int calculated_hostname:1;	// 390 = 0x186
}

- (void).cxx_destruct;	// IMP=0x0000000000762d50
- (void)setEchConfig:(id)arg1;	// IMP=0x0000000000762d30
- (id)echConfig;	// IMP=0x0000000000762d10
- (void)setPriority:(unsigned short)arg1;	// IMP=0x0000000000762cf0
- (unsigned short)priority;	// IMP=0x0000000000762cd0
- (unsigned long long)getHash;	// IMP=0x0000000000762c00
- (id)copyEndpoint;	// IMP=0x0000000000762bb0
- (_Bool)isEqualToEndpoint:(id)arg1 matchFlags:(unsigned char)arg2;	// IMP=0x0000000000762a10
- (char *)createDescription:(_Bool)arg1;	// IMP=0x0000000000761d10
- (const char *)hostname;	// IMP=0x0000000000761ca0
- (unsigned short)port;	// IMP=0x0000000000761bb0
- (id)copyDictionary;	// IMP=0x0000000000761b30
- (unsigned int)type;	// IMP=0x0000000000761b20
- (void)dealloc;	// IMP=0x0000000000761ac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

