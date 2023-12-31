//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetInfoControl : NSObject
{
    _Bool _clearingAfter;	// 8 = 0x8
    NSArray *_limitedToClientDomains;	// 16 = 0x10
    NSArray *_limitedToSetIdentifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000194226
- (void).cxx_destruct;	// IMP=0x00000000001945bf
@property(readonly, retain, nonatomic) NSArray *limitedToSetIdentifiers; // @synthesize limitedToSetIdentifiers=_limitedToSetIdentifiers;
@property(readonly, retain, nonatomic) NSArray *limitedToClientDomains; // @synthesize limitedToClientDomains=_limitedToClientDomains;
@property(readonly, nonatomic) _Bool clearingAfter; // @synthesize clearingAfter=_clearingAfter;
- (id)_arrayStringsToString:(id)arg1;	// IMP=0x00000000001943be
- (id)summary;	// IMP=0x0000000000194240
- (id)description;	// IMP=0x000000000019422e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000194154
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000193f52
- (id)initClearingAfter:(_Bool)arg1 limitedToClientDomains:(id)arg2 limitedToSetIdentifiers:(id)arg3;	// IMP=0x0000000000193eb0
- (id)initClearingAfter:(_Bool)arg1 limitedToClientDomains:(id)arg2;	// IMP=0x0000000000193e9b
- (id)initClearingAfter:(_Bool)arg1 limitedToSetIdentifiers:(id)arg2;	// IMP=0x0000000000193e84
- (id)initClearingAfter:(_Bool)arg1;	// IMP=0x0000000000193e70

@end

