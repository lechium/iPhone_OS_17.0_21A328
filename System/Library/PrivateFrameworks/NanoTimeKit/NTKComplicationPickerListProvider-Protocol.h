//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSDiffableDataSourceSnapshot;
@protocol NTKComplicationItem;

@protocol NTKComplicationPickerListProvider <NSObject>
@property(readonly, nonatomic) _Bool pickerListProviderSlotIsRich;
@property(readonly, nonatomic) id <NTKComplicationItem> pickerSelectedItem;
@property(readonly, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@end

