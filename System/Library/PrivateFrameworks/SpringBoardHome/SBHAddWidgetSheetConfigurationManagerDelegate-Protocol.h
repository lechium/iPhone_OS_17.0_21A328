//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSString, SBHAddWidgetSheetConfigurationManager, SBHomeScreenDefaults, SBRootFolder, UIViewController;
@protocol SBHMainAddSheetViewControlling;

@protocol SBHAddWidgetSheetConfigurationManagerDelegate <NSObject>
- (NSString *)addWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1 vendorNameForAppWithBundleIdentifier:(NSString *)arg2;
- (UIViewController<SBHMainAddSheetViewControlling> *)addWidgetSheetViewControllerForAddWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1;

@optional
- (SBHomeScreenDefaults *)homeScreenDefaultsForAddWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1;
- (SBRootFolder *)rootFolderForAddWidgetSheetConfigurationManager:(SBHAddWidgetSheetConfigurationManager *)arg1;
- (unsigned long long)iconGridSizeClassMaskForWidgetFamilyMask:(unsigned long long)arg1;
@end

