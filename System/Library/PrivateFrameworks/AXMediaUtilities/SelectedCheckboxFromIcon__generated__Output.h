//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface SelectedCheckboxFromIcon__generated__Output : NSObject
{
    NSDictionary *_labelProbability;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a7ca2
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSDictionary *labelProbability; // @synthesize labelProbability=_labelProbability;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000a7bb7
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithLabelProbability:(id)arg1 label:(id)arg2;	// IMP=0x00000000000a7b25

@end
