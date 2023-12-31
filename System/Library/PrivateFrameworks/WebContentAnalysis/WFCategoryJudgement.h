//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFCategoryJudgement : NSObject
{
    float score;	// 8 = 0x8
    long long category;	// 16 = 0x10
}

+ (id)categoryJudgementWithCategory:(long long)arg1 score:(float)arg2;	// IMP=0x0060000000004572
- (id)description;	// IMP=0x0000000000004698
- (long long)compareByScore:(id)arg1;	// IMP=0x0000000000004643
- (long long)compareByCategory:(id)arg1;	// IMP=0x00000000000045f9
- (void)setCategory:(long long)arg1;	// IMP=0x00000000000045ef
- (long long)category;	// IMP=0x00000000000045e5
- (void)setScore:(float)arg1;	// IMP=0x00000000000045da
- (float)score;	// IMP=0x00000000000045cf

@end

