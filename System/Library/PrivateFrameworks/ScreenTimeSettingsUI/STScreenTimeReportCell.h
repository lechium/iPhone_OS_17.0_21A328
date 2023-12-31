//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STNoUsageDataView, UIViewController;
@protocol STScreenTimeReportFiltering;

__attribute__((visibility("hidden")))
@interface STScreenTimeReportCell
{
    UIViewController<STScreenTimeReportFiltering> *_reportViewController;	// 120 = 0x78
    STNoUsageDataView *_noUsageDataView;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000004fab4
@property(readonly) STNoUsageDataView *noUsageDataView; // @synthesize noUsageDataView=_noUsageDataView;
@property(readonly) UIViewController<STScreenTimeReportFiltering> *reportViewController; // @synthesize reportViewController=_reportViewController;
- (void)dealloc;	// IMP=0x000000000004f9ea
- (void)_selectedUsageReportDidChange:(id)arg1;	// IMP=0x000000000004f8de
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004f771
- (void)setValue:(id)arg1;	// IMP=0x000000000004f44d
- (id)value;	// IMP=0x000000000004f40f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x000000000004ebd5

@end

