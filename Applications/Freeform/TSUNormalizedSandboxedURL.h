//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLSandboxedURL;

@interface TSUNormalizedSandboxedURL
{
    CRLSandboxedURL *_originalSandboxedURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000875c2
- (id)description;	// IMP=0x00100000000874da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000870b2
- (id)originalSandboxedURLForNormalizing;	// IMP=0x001000000008704b
- (_Bool)hasSandboxAccess;	// IMP=0x0010000000086ff7
- (id)initWithURL:(id)arg1 originalSandboxedURL:(id)arg2;	// IMP=0x0010000000086f7f

@end

