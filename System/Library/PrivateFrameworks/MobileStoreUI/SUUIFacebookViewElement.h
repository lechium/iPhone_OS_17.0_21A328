//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SUUIFacebookViewElement : SUUIViewElement
{
    long long _facebookType;	// 8 = 0x8
    NSString *_urlString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030150e
@property(readonly, nonatomic) NSString *URLString; // @synthesize URLString=_urlString;
@property(readonly, nonatomic) long long facebookType; // @synthesize facebookType=_facebookType;
- (long long)pageComponentType;	// IMP=0x00000000003014e1
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x0000000000301417
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x0000000000301320

@end
