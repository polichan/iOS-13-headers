/* Generated by RuntimeBrowser.
 */

@protocol AVTAvatarAttributeEditorSection <NSObject>

@required

- (<AVTAvatarAttributeEditorHeaderPicker> *)headerAccessory;
- (NSString *)identifier;
- (NSString *)localizedName;
- (NSArray *)sectionItems;
- (void)setHeaderAccessory:(id <AVTAvatarAttributeEditorHeaderPicker>)arg1;
- (void)setLocalizedName:(NSString *)arg1;
- (bool)shouldDisplaySeparatorBeforeSection:(id <AVTAvatarAttributeEditorSection>)arg1;
- (bool)shouldDisplayTitle;

@end
