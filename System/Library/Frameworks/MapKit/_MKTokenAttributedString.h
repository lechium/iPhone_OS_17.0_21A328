//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _MKTokenAttributedString : NSObject
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011b4a1
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)description;	// IMP=0x000000000011b460
- (_Bool)isEmpty;	// IMP=0x000000000011b421

@end

