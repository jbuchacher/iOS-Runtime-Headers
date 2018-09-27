/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMAssetActionManager : PXAssetActionManager {
    PXCMMPhotoKitImportStatusManager * _importStatusManager;
    NSMutableDictionary * _performerClassByType;
}

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)initWithSelectionManager:(id)arg1 importStatusManager:(id)arg2 allowsSelection:(bool)arg3;
- (bool)shouldEnableActionType:(id)arg1 onAsset:(id)arg2;

@end