#ifndef CXX_PROJECT_SETTINGS_H
#define CXX_PROJECT_SETTINGS_H

#include "settings/ProjectSettings.h"

class CxxProjectSettings: public ProjectSettings
{
public:
	CxxProjectSettings();
	CxxProjectSettings(const FilePath& projectFilePath);
	CxxProjectSettings(std::string projectName, const FilePath& projectFileLocation);
	virtual ~CxxProjectSettings();

	virtual bool equalsExceptNameAndLocation(const ProjectSettings& other) const;

	std::vector<FilePath> getHeaderSearchPaths() const;
	std::vector<FilePath> getAbsoluteHeaderSearchPaths() const;
	bool setHeaderSearchPaths(const std::vector<FilePath>& headerSearchPaths);

	std::vector<FilePath> getFrameworkSearchPaths() const;
	std::vector<FilePath> getAbsoluteFrameworkSearchPaths() const;
	bool setFrameworkSearchPaths(const std::vector<FilePath>& frameworkSearchPaths);

	std::vector<std::string> getCompilerFlags() const;
	bool setCompilerFlags(const std::vector<std::string>& compilerFlags);

	bool getUseSourcePathsForHeaderSearch() const;
	bool setUseSourcePathsForHeaderSearch(bool useSourcePathsForHeaderSearch);

	FilePath getVisualStudioSolutionPath() const;
	bool setVisualStudioSolutionPath(const FilePath& visualStudioSolutionPath);

	FilePath getCompilationDatabasePath() const;
	bool setCompilationDatabasePath(const FilePath& compilationDatabasePath);

private:
	virtual std::vector<std::string> getDefaultSourceExtensions() const;
};

#endif // CXX_PROJECT_SETTINGS_H