//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKLocalSearchCompletion, NSString;

@interface DirectionIntentCellViewModel : NSObject
{
    NSString *_titleCellString;	// 8 = 0x8
    NSString *_subtitleCellString;	// 16 = 0x10
    MKLocalSearchCompletion *_localSearchCompletion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000049e4a3
@property(retain, nonatomic) MKLocalSearchCompletion *localSearchCompletion; // @synthesize localSearchCompletion=_localSearchCompletion;
@property(copy, nonatomic) NSString *subtitleCellString; // @synthesize subtitleCellString=_subtitleCellString;
@property(copy, nonatomic) NSString *titleCellString; // @synthesize titleCellString=_titleCellString;
- (id)_titleOfResolvedItem:(id)arg1 withSearchCompletion:(id)arg2;	// IMP=0x001000000049e3cc
- (void)_calculateStrings;	// IMP=0x001000000049dfe1
- (id)initWithLocalSearchCompletion:(id)arg1;	// IMP=0x001000000049df66

@end

