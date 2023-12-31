//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TwoLinesOutlineCellActionViewDelegate;

@interface TwoLinesOutlineCellActionModel : NSObject
{
    NSString *_buttonTitle1;	// 8 = 0x8
    NSString *_buttonTitle2;	// 16 = 0x10
    id <TwoLinesOutlineCellActionViewDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000952b52
@property(readonly, nonatomic) id <TwoLinesOutlineCellActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *buttonTitle2; // @synthesize buttonTitle2=_buttonTitle2;
@property(readonly, nonatomic) NSString *buttonTitle1; // @synthesize buttonTitle1=_buttonTitle1;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000952a08
- (unsigned long long)hash;	// IMP=0x00100000009529c9
- (id)initWithButtonTitle1:(id)arg1 buttonTitle2:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000009528e9

@end

