//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HomeActionFooterViewDelegate;

@interface HomeActionFooterViewModel : NSObject
{
    id <HomeActionFooterViewDelegate> _delegate;	// 8 = 0x8
    double _topMargin;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004341a9
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(retain, nonatomic) id <HomeActionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000434095
- (unsigned long long)hash;	// IMP=0x0010000000434042

@end

