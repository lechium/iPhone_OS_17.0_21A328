//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MicroPaymentProductsResponse : NSObject
{
    NSArray *_expectedIdentifiers;	// 8 = 0x8
    NSArray *_invalidIdentifiers;	// 16 = 0x10
    NSArray *_products;	// 24 = 0x18
}

@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, nonatomic) NSArray *invalidIdentifiers; // @synthesize invalidIdentifiers=_invalidIdentifiers;
@property(copy, nonatomic) NSArray *expectedIdentifiers; // @synthesize expectedIdentifiers=_expectedIdentifiers;
- (_Bool)loadFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000057c90
- (void)dealloc;	// IMP=0x0010000000057c3f

@end
