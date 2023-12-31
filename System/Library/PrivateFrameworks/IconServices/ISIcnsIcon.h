//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISIcns, NSData;

__attribute__((visibility("hidden")))
@interface ISIcnsIcon
{
    NSData *_icnsData;	// 16 = 0x10
    ISIcns *_internalICNS;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004122b
- (void).cxx_destruct;	// IMP=0x0000000000041588
@property(retain) ISIcns *internalICNS; // @synthesize internalICNS=_internalICNS;
@property(readonly) NSData *icnsData; // @synthesize icnsData=_icnsData;
- (id)makeResourceProvider;	// IMP=0x0000000000041543
@property(readonly) ISIcns *icns; // @dynamic icns;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000414be
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041423
- (id)initWithIcnsData:(id)arg1;	// IMP=0x0000000000041372
- (id)initWithIcns:(id)arg1;	// IMP=0x00000000000412b9
- (id)initWithContentOfURL:(id)arg1;	// IMP=0x0000000000041233

@end

