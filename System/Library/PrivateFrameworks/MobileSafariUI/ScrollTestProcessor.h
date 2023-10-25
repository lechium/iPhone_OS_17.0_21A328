//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ScrollTestProcessor
{
    _Bool _startedScrollTest;	// 80 = 0x50
    int _scrollDelta;	// 84 = 0x54
}

@property(nonatomic) _Bool startedScrollTest; // @synthesize startedScrollTest=_startedScrollTest;
@property(nonatomic) int scrollDelta; // @synthesize scrollDelta=_scrollDelta;
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x00000000000fdf53
- (_Bool)startPageAction:(id)arg1;	// IMP=0x00000000000fdee9
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x00000000000fde9b

@end
