/* Generated by RuntimeBrowser.
 */

@protocol NUDevice <NSObject>

@required

- (long long)defaultSampleMode;
- (unsigned long long)family;
- (bool)hasMetalSupport;
- (bool)hasOpenGLSupport;
- (<NURenderer> *)lowPriorityRenderer:(out id*)arg1;
- (NSString *)model;
- (NSString *)name;
- (long long)openGLVirtualScreen;
- (<NURenderer> *)renderer:(out id*)arg1;

@end
