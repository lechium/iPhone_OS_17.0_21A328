//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLEditingCoordinator, CRLInteractiveCanvasController, CRLiOSShapeLibraryViewController, NSArray, NSString, UITraitCollection;

@protocol CRLiOSShapeLibraryViewControllerDelegate <NSObject>
- (_Bool)shapeLibraryViewControllerShouldAllowInsertDrag:(CRLiOSShapeLibraryViewController *)arg1;
- (void)shapeLibraryViewController:(CRLiOSShapeLibraryViewController *)arg1 didInsertBoardItems:(NSArray *)arg2;
- (void)willInsertBoardItemsFromShapeLibraryViewController:(CRLiOSShapeLibraryViewController *)arg1;
- (void)shapeLibraryViewControllerDidCancelSearch:(CRLiOSShapeLibraryViewController *)arg1;
- (void)shapeLibraryViewController:(CRLiOSShapeLibraryViewController *)arg1 willDisappearWithSearchTerm:(NSString *)arg2;
- (void)shapeLibraryViewControllerWillBeginSearch:(CRLiOSShapeLibraryViewController *)arg1;
- (NSString *)shapeLibraryViewControllerDefaultSearchTerm:(CRLiOSShapeLibraryViewController *)arg1;
- (_Bool)shapeLibraryViewControllerShouldAppearInSearchMode:(CRLiOSShapeLibraryViewController *)arg1;
- (UITraitCollection *)boardViewControllerTraitCollectionForShapeLibraryViewController:(CRLiOSShapeLibraryViewController *)arg1;
- (CRLInteractiveCanvasController *)interactiveCanvasControllerForShapeLibraryViewController:(CRLiOSShapeLibraryViewController *)arg1;
- (CRLEditingCoordinator *)editingCoordinatorForShapeLibraryViewController:(CRLiOSShapeLibraryViewController *)arg1;
@end

